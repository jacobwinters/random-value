// RandomValue in JavaScript
// A mistake, carried through to perfection
// By Jacob Winters; released under CC0

// Inclusive of the lower bound and exclusive of the upper bound
export function randomInt(x, y=0) {
	const base = Math.min(x, y),
		range = Math.abs(x - y);
	return {valueOf: () => Math.floor(base + Math.random() * range)};
}

export function randomFloat(x=1, y=0) {
	const base = Math.min(x, y),
		range = Math.abs(x - y);
	return {valueOf: () => base + Math.random() * range};
}
