int Solution::romanToInt(string str) {

    int ans=0;

    int i=0;

    while(i<str.size()){

        if(str[i]=='M'){

            ans+=1000;

        }

        else if(str[i]=='D'){

            ans+=500;

        }

        else if(str[i]=='C'){

            if(i+1<str.size()&&str[i+1]=='D'){

                ans+=400;

                i++;

            }

            else if(i+1<str.size()&&str[i+1]=='M'){

                ans+=900;

                i++;

            }

            else{

                ans+=100;

            }

        }

        else if(str[i]=='L'){

            ans+=50;

        }

        else if(str[i]=='X'){

            if(i+1<str.size()&&str[i+1]=='L'){

                ans+=40;

                i++;

            }

            else if(i+1<str.size()&&str[i+1]=='C'){

                ans+=90;

                i++;

            }

            else{

                ans+=10;

            }

        }

        else if(str[i]=='V'){

            ans+=5;

        }

        else if(str[i]=='I'){

            if(i+1<str.size()&&str[i+1]=='V'){

                ans+=4;

                i++;

            }

            else if(i+1<str.size()&&str[i+1]=='X'){

                ans+=9;

                i++;

            }

            else{

                ans+=1;

            }

        }

        i++;

    }

    return ans;

}
