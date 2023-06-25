//problem 1
function problem1(n : number): number
{
    let sum = 0;
    for(let i = 1; i < n; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    return sum;
}
//console.log(problem1(1000));
console.log(problem1(10));


//problem 2
function problem2(n : number): number 
{
    let f = 1, s = 1, ans = 0, sum = 0;
    while(sum < n)
    {
        sum = f + s;
        f = s;          
        s = sum;        
        if(sum % 2 == 0)
            ans += sum;
    }
    return ans;
}
//console.log(problem2(4000000));
console.log(problem2(10));


//problem 3
function isPrime(n: number): boolean
{
    if(n <= 1)
        return false;
    for(let i = 2; i < n / 2; i++)
        if(n % i == 0)
            return false;
    return true;
}

function problem3(n : number): number
{
    let l = 0;
    for(let i = 2; i < n; i++)
        if(isPrime(i) && n % i == 0)
            l = i;
    return l;
}
//console.log(problem3(600851475143));
console.log(problem3(13195));