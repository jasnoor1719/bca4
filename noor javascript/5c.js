function JSonParse(JSonString){
    try{
        const parsedData=JSon.parse(JSonString);
        console.log("parsed data:",parasedData);
    } catch (error){
        console.error("error parsing Json:",error.message);
    }
}
JSonParse('{"name":"jasnoor","rno":2410997165}');
JSonParse('invalid Json String');
