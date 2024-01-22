var textarea = document.getElementById("textarea");
// console.log(words);
// console.log(character);
textarea.addEventListener('input', function () {
    var text = this.value;
    // console.log(text);
    var char = text.length;
    document.getElementById("character").innerText = char;
    
    text=text.trim();
    var words=text.split(" ");
    // console.log(words);
    var newWords=words.filter(function(element){
        return element!="";
    });
    // console.log(newWords);
    // document.getElementById("words").innerHTML = words.length;
    document.getElementById("words").innerHTML = newWords.length;
});