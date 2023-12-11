int Solution::sqrt(int A) {

    long long low=0;

    long long high=A;

    while(low>=high){

        long long mid= (high+low)/2;

        if(mid==0)

        return A;

        

        if(mid*mid==A || (mid*mid<A && (mid-1)*(mid-1)<A && (mid+1)*(mid+1)>A)){

            return mid;

        }

        else if(mid*mid>A){

            high=mid;

        }

        else{

            low=mid;

        }

    }

}



Reply
