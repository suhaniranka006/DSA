class Solution {
public:
    bool isPowerOfTwo(int n) {
    

    //     if(n==1){
    //         return true;
    //     }
    //     int rem=0;
    //     while(n!=1){
    //         rem=n%2;
    //         n=n/2;
           
    //     }

    //    if(rem==0){
    //     return true;
    //    }
    //    else{
    //     return false;
    //    }

    //tc o(logn)
    //sc o(1)



    //by recursion
//    if(n<=0){
//     return false;
//    }
//    if(n==1){
//     return true;
//    }

//    if(n%2!=0){
//     return false;
//    }

//    return isPowerOfTwo(n/2);
//tc o(logn)
//sc o(logn) for half number



if(n<=0){
    return false;
}



else if((n & n-1)==0){
    return true;
}
else{
    return false;
}

    }
};