# The world's worst interface to a random number generator
```c++
// It's the random number generator that looks like a number!
RandomInt x(1000);
// You can use it like a normal int
cout << 3 * x + 2 << endl; // Printed 2174
// But it has a new value every time you use it!
cout << 3 * x + 2 << endl; // Printed 1346
```

## This is horrifying. Why did you make it?
Because I could.

## Should I use it in my code?
Please don't.

## *Can* I use it in my code?
It's licensed under CC0, so I suppose I can't stop you.
