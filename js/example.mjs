import { randomInt, randomFloat } from "./randomvalue.mjs";

const x = randomInt(10);
for(let i = 0; i < 3; i++) {
	console.log(`x = ${+x}`);
}
console.log(`x + 2 = ${x + 2}`);
console.log(`3 * x = ${3 * x}`);

const y = randomFloat();
for(let i = 0; i < 3; i++) {
	console.log(`y = ${+y}`);
}
console.log(`1 / y = ${1 / y}`);
