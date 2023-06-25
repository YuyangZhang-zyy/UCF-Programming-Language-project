isPrimeL n = 
    if n > 1 then null [ x | x <- [2..(n `div` 2)], n `mod` x == 0] 
    else False
zipList = zip [1..] [x | x <- [2..], isPrimeL x]

problem1 n = take n ([snd x | x <- zipList, odd (fst x)])



problem2 n = go n 1 1
    where 
    go n f s
      | (f+s) > n = []
      | otherwise = if last (show(f+s)) == '3' then (f+s) : go n s (f+s) else go n s (f+s)



toInt x = round x
isInt x = x == fromInteger (round x)
checkInt n = 
    if isInt n then toInt n
    else toInt 4.0 

isPrimeR n = ip n [2..(n `div` 2)]
    where
    ip _ [] = True
    ip n (x:xs)
        | n `mod` x == 0 = False
        | otherwise = ip n xs

problem3 n = [x | x <- [2..n], x `mod` 5 == 0 || isPrimeR (checkInt (isqrt x))]
isqrt = sqrt . fromIntegral