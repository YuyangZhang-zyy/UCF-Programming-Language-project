console.log(program1(200));
function program1(n) 
{
    let coins = [1, 2, 5, 10, 20, 50, 100, 200];
    let table = new Array(n + 1);
    for(let a = 0; a <= n; a++) 
    {
        table[a] = new Array(coins.length);
        table[a][0] = 1;
    }
  
    for(var i = 0; i <= n; i++) 
    {
        for(var j = 1; j < coins.length; j++) 
        {
            table[i][j] = table[i][j - 1];
            if(coins[j] <= i)
                table[i][j] += table[i - coins[j]][j];
        }
    }
    return table[i - 1][j - 1];
}