const student = `{
   "Name": "jasnoor kaur",
    "Rollno" : 2410997165,
    "Email": "jasnoork850@gmail.com",
    "Courses": ["FED","python","Ai"]
}`;
console.log("Original data");
console.log(typeof(student));
console.log(student)
const parseStudent = JSON.parse(student); 
console.log("Parse Data ");
console.log(typeof(parseStudent));
console.log(parseStudent); 