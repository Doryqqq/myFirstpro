
let reverse=0,count=0,temp;
reverse = document.getElementById("input");
while(x){
    temp = x%10;//0//0//1
    reverse = reverse*10 + temp;//0//0//1
    x/=10;//10//1//0
    count++;//1//2//3跳出
}
function mF(){
    document.getElementById("w").innerHTML=f();
}

