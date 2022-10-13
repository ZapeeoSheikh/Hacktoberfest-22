const a = [{ value:"0", display:"Jamsheer" }, { value:"1", display:"Muhammed" }, { value:"2", display:"Ravi" }, { value:"3", display:"Ajmal" }, { value:"4", display:"Ryan" }];
const b = [{ value:"0", display:"Jamsheer", $$hashKey:"008" }, { value:"1", display:"Muhammed", $$hashKey:"009" }, { value:"2", display:"Ravi", $$hashKey:"00A" }, { value:"3", display:"Ajmal", $$hashKey:"00B" }];

// A comparer used to determine if two entries are equal.
const isSameUser = (a, b) => a.value === b.value && a.display === b.display;

// Get items that only occur in the left array,
// using the compareFunction to determine equality.
const onlyInLeft = (left, right, compareFunction) => 
  left.filter(leftValue =>
    !right.some(rightValue => 
      compareFunction(leftValue, rightValue)));

const onlyInA = onlyInLeft(a, b, isSameUser);
const onlyInB = onlyInLeft(b, a, isSameUser);

const result = [...onlyInA, ...onlyInB];

console.log(result);
