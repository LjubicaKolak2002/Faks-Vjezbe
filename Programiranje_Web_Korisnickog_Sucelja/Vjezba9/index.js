//1.zadatak
function markWords() {
    const txt = document.getElementById("text").innerText;
    let output = "";
    let words = txt.split(" ");
    let size = 8   
    let replacementword = ""; 
    for (let i = 0; i < words.length; i++) {
        let word = words[i];
        if (word.length >= 8) {
            replacementword = "<span class='text'>" + word + "</span>";
        } 
        else {
            replacementword = word;  
        }
        output = output + " " + replacementword + " ";  
    }
    return output; 
    
}
document.getElementById("text").innerHTML = markWords();

//2.zadatak
function addLink() {
    let anchor = document.createElement('a');
    let link = document.createTextNode("Web stranica fakulteta");
    anchor.appendChild(link);
    anchor.href = "https://www.oss.unist.hr/";
    document.body.appendChild(anchor);
}
addLink();

//3.zadatak
function numberWords(text){
    const words = text.split(' ');
    let len = words.length;
    return len;
}
const txt = document.getElementById("text").innerText
const result = numberWords(txt);

const node = document.createElement("div");
const textnode = document.createTextNode(result + " rijeci");
node.appendChild(textnode);
document.getElementById("h1").insertAdjacentHTML('afterend', node.innerHTML);


//4.zadatak
function replaceFun() {
    const txt = document.getElementById("text").innerText;
    let output = "";
    let words = txt.split(" ");
    let replacementword = ""; 
    for (let i = 0; i < words.length; i++) {
        let word = words[i];
        if (word[i] === '?') {
            replacementword = "<span class='text'>" + '&#129300' + "</span>";
        } 
        if (word[i]=== '?') {
            replacementword = "<span class='text'>" + '&#128562' + "</span>";
        } 
        else {
            replacementword = word;  
        }
        output = output + " " + replacementword + " ";  
    }
    return output; 
    
}

//document.getElementById("text").innerHTML = replaceFun();
