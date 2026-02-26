function simulate(callback,delay){
    if(typeof callback !=='function'){
        throw new error('the first argument must be a function.');

    }
    if(typeof delay !=='number' || delay<0){
        throw new Error('the second argument represent DElAY in milliseconds.');

    }
    setTimeout(() =>{
        callback();
    },
     delay);
}
simulate(()=>{
    console.log('jasnoor 2410997165');

},5000);


    