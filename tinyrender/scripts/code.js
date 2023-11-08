async function populateCodeBlocks() {
    let codeBlocks = document.getElementsByClassName("code");
    console.log("Found " + Array.from(codeBlocks).length + " code blocks");
    const populating = Array.from(codeBlocks).map(async (element) => {
        // Fetch
        const path = element.innerHTML;
        const response = await fetch("./" + path);
        if(!response.ok) {
            element.innerHTML = "Error";
            throw new Error("Couldn't load code block for " + path);
        } else {
            console.log("Found " + path);
        }

        // Get code and escape characters
        let code = await response.text();
        code = code.replaceAll("<", "&lt;");
        code = code.replaceAll(">", "&gt;");

        // Replace the text that has the path with the code
        element.innerHTML = code;
        return;
    });

    await Promise.all(populating);
}

// Replace the file paths with code, then highlight
populateCodeBlocks().then(() => {
    console.log("Highlighting code blocks");
    hljs.highlightAll();
})
