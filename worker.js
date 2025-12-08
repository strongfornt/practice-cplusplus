onmessage = function(message){
    console.log(message.data)

    let total=0;

    for(let i = 0; i <  100000000000; i++){
        total += i
    }

    console.log("my work is finished")

    this.postMessage(total)

}