/*Time Complexity: It is the amount of time taken by an algorithm to run as a length of the input.
==> It is used to comfare faster and slower algorithms
==> Big O notation(Upper Bound)
--> Constant time O(1)
--> Linear time O(n)
--> Logarithmic time O(logn(n))
--> Quadratic time O(n^2)
--> Cubic time O(n^3)
=========>       Complexity      =========>      Imcreases        =========>
   O(1)---O(logn(n))---O(n)---O(nlog(n))---O(n^2)---O(n^3)---O(2^n)---O(n!)

==> For finding the complexity of given functions ignore the constants and lower complexity...
==> Bahar loop hai to plus aur nested loop hai to multiply...

Q. What is the time complexity of following code:

    int a =0,b=0;
    for(int i=0;i<n;i++){
        a=a+rand();
    }
    for(int j=0;j<m;j++){
        b=b+rand();
    }
{Assume that rand() is O(1) time, O(1) space function}


Ans. Time Complexity: O(n+m)


Q. What is the time complexity of following code:
    int a=0,b=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a=a+j;
        }
    }
    for(k=0;k<n;k++){
        b=b+k;
    }

Ans. O(n*n)+O(n)==O(n^2)+O(n)==O(n^2){We neglect the lower time complexity}



===> 10^8 Operation Rule: Most of the modern machine can perform 10^8 operations/second....
------
<[10...11]------------ O(n!), O(n^6)
<[15...18]------------ O(2^n * n^2)
<[100]---------------- O(n^4)
<[400]---------------- O(n^3)
<[2000]--------------- O(n^2 * logn)
<[10^4]--------------- O(n^2)
<[10^6]--------------- O(nlogn)
<[10^8]--------------- O(n), O(logn)



*/


