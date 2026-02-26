function outfunc(){
    let outvar="outer variable";
    function infunc() {
   
     console.log("jasnoor   2410997165");
        console.log(outvar);

    }
    return infunc;

}
const closure=outfunc();
closure();
