console.log(problem2(1000));
function problem2(n : number): number
{
    let maxCount = 0;
    let maxP = 0;
    for (let p = 1; p <= n; p++) 
    {
        let count = 0;
        for(let a = 3; a < (p / 3); a++)
        {
            for(let b = a + 1; b < (p - a) / 2; b++)
            {
                let c = p - a - b;
                if(a ** 2 + b ** 2 === c ** 2)
                    count++;
            }
        }
        if (count > maxCount) 
        {
            maxP = p;
            maxCount = count;
        }
    }
    return maxP;
}

