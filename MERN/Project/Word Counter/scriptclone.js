var textarea = document.getElementById("textarea");
// console.log(textarea);
textarea.addEventListener('input', function () {
    var text = this.value;    //this mtlb yeh h ki yeh event kisne originate kiya h ish condtion m textarea n orginate kiya h event.
    // console.log(text);
    var char = text.length;

    document.getElementById("character").innerHTML = char;

    text=text.trim();   //aage or peeche k space hta diye
    var words=text.split(" ");
    // console.log(words);
    var newWords=words.filter(function(element){
        return element!="";
    });
    console.log(newWords);
    // document.getElementById("words").innerHTML=words.length;
    document.getElementById("words").innerHTML=newWords.length;

});
