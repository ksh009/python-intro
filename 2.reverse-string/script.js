/*
    Reverse the provided string and return the reversed string.

        For example, "hello" should become "olleh".
*/

function reverseString(str) {
	return str.split('').reverse().join('');
}

const result = reverseString('Hello');
console.log(result);
