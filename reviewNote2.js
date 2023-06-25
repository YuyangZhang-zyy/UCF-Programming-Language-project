//console.log(isPalindrome(424));
//console.log(isPrime(7));
//console.log(sumOfDigits("1234"));
//console.log(factorial(BigInt(8)));
//console.log(review1());
//console.log(review2(20));
//console.log(review3(100));
//console.log(review4(100));
//console.log(review5(24));
//console.log(review6(100));
//console.log(review7(15));
//console.log(review8(10));
//review9();

function isPrime(num)
{
    let limitNumber = parseInt(Math.floor(Math.sqrt(num))) + 1;
    for (let i = 2; i < limitNumber; i++)
        if(num % i == 0)
            return false;
    return true;
}

function isPalindrome(num)
{
    let original = "" + num;
    let len = original.length;
    let rev = "";
    for(let i = len - 1; i >= 0; i--)
        rev += original.substring(i, i + 1);
    return original === rev;
}

function sumOfDigits(str)
{
    let total = 0;
    for(let i = 0; i < str.length; i++)
    {
        let ch = str.substring(i, i + 1);
        let val = parseInt(ch);
        total += val;
    }
    return total;
}

function factorial(num)
{
    if(num == 0)
        return BigInt(1);
    return num * factorial(num - BigInt(1));
}

//review 1
function review1()
{
    let largest = 0;
    for(let outtie = 10; outtie <= 999; outtie++)
        for(let innie = 10; innie <= 999; innie++)
            if(isPalindrome(outtie * innie))
                if(outtie * innie > largest)
                    largest = outtie * innie;

    return largest;
}

//review 2
function isDivisible(num, range)
{
    for(let i = 1; i <= range; i++)
        if(num % i != 0)
            return false;
    return true;
}

function review2(topLimit)
{
    let i = topLimit;
    while(true)
    {
       if(isDivisible(i, topLimit))
            return i;
       i++;
    }
    return -1;
}

//review 3
function sumOfSquares(topLimit)
{
    let total = 0;
    for(let i = 1; i <= topLimit; i++)
        total += (i ** 2);
    return total;
}

function squareOfSum(topLimit)
{
    let total = 0;
    for(let i = 1; i <= topLimit; i++)
        total += i;
    return total ** 2;
}

function review3(num)
{
    return squareOfSum(num) - sumOfSquares(num);
}

//review4
function review4(limit)
{
    let primeCount = 0;
    let i = 2;
    while(primeCount < limit)
    {
        if(isPrime(i))
        {
            primeCount++;
            if(primeCount >= limit)
                return i;
        }
        i++;   
    }
    return -1;
}

//review5
function isTriple(a, b, c)
{
    return a ** 2 + b ** 2 === c ** 2;
}

function review5(limit)
{
    for(let a = 2; a < limit; a++)
    {
        for(let b = a; b < limit; b++)
        {
            for(let c = b; c < limit; c++)
            {
                if(isTriple(a, b, c))
                {
                    console.log(a + " " + b + " " + c);
                    if(a + b + c == limit)
                        console.log("Huge answer is " + a + " " + b + " " + c);
                }    
            }
        }
    }
}

//review6
function review6(limit)
{
    let total = 0;
    for(let i = 2; i < limit; i++)
    {
        if(isPrime(i))
            total += i;
    }
    return total;
}

//review7
function review7(num)
{
    let total = BigInt(2 ** num);
    return sumOfDigits("" + total);
}

//review8
function review8(num)
{
    let fac = factorial(BigInt(num));
    return sumOfDigits("" + fac);
}

//review9
function arePermutation( a, b, c )
{
    let counts = [0,0,0,0,0,0,0,0,0,0];

    if( a < 1000 || a > 9999 )
        return -1;
    if( b < 1000 || b > 9999 )
        return -1;
    if( c < 1000 || c > 9999 )
        return -1;

    let sa = "" + a;
    let sb = "" + b;
    let sc = "" + c;

    for( let i=0; i<sa.length; i++ )
    {
        let thisDigit = parseInt( sa.substring( i, i + 1 ) );
        counts[thisDigit]++;
        thisDigit = parseInt( sb.substring( i, i + 1 ) );
        counts[thisDigit]++;
        thisDigit = parseInt( sc.substring( i, i + 1 ) );
        counts[thisDigit]++;
    }

    for( let i=0; i<counts.length; i++ )
    {
        if( counts[i] == 0 )
            continue;
        if( counts[i] % 3 != 0 )
            return false;
    }
    return true;
}

function review9()
{
    for(let a = 1488; a <= 9999; a++)
    {
        if(!isPrime(a))
            continue;
        for(let b = a + 3330; b <= 9999; b++)
        {
            if(!isPrime(b))
                continue;
            for(let c = b + 3330; c <= 9999; c++)
            {
                if(!isPrime(c))
                    continue;
                if(a + 3330 === b && b + 3330 === c && arePermutation(a, b, c))
                {
                    console.log("a = " + a + ", b = " + b + ", c = " + c);
                    console.log(("" + a) + ("" + b) + ("" + c));
                }
            }
        }
    }
}



/*
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();

var empId = 1;
var empName = "Steve";
var employee = [1, "Steve"];
// class Employee
// {
//     empCode: number;
//     empName: string;
// }
// let emp = new Employee();
// emp.empCode = 55;
//var Person = /** @class */ //(function () {
//  function Person(name) {
//      this.name = name;
//  }
//  return Person;
//}());

//var Employee = /** @class */ (function (_super) {
//  __extends(Employee, _super);
//  function Employee(empCode, name) {
//      var _this = _super.call(this, name) || this;
//      _this.empCode = empCode;
//      return _this;
//  }
//  Employee.prototype.displayName = function () {
//      console.log("Name:" + this.name);
//  };
//  return Employee;
//}(Person));
//var emp = new Employee(100, "Bill");
//emp.displayName();
