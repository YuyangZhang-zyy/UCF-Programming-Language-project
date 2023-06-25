//Problem 1
function problem1(n)
{
    let longestS = 1;
    let longestV = 1;

    for(i = 2; i < n; i++)
    {
        let term = 1;
        let cur = i;

        while(cur != 1)
        {
            if(cur % 2 == 0)
                cur = cur / 2;
            else
                cur = 3 * cur + 1;
            term++;
        }
        
        if(term > longestS)
        {
            longestS = term;
            longestV = i;
        }
    }
    return longestV;
}

console.log(problem1(100000));



//Problem 2
function factorial(n)
{
    if (n == 1) 
        return 1;
    return n * factorial(n - 1);
}
function sumOfDigits(num) 
{
    const str = num.toString();
    let sum = 0;
    for (var x = -1; ++x < str.length;)
        sum += +str[x];
    return sum;
}

function problem2(n)
{
    return sumOfDigits(factorial(n));
}

console.log(problem2(100));