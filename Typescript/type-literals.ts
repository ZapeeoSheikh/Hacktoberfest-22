type Size = "XL" | "LG" | "MD" | "SM" | "XS";
type Goods = "Pants" | "Shirt" | "Shoes" | "Hat" | "Gloves";

/**
 * Product has combinations such as
 * XL Pants
 * LG Pants
 * ...
 * XS Pants
 * XL Shirt
 * ...
 * SM Shirt
 * XS Shirt
 * ...
 * XS Gloves
 */
type Product = `${Size} ${Goods}`;

let product: Product = "MD Gloves";

// MD Gloves
console.log(product);

// Error: Type '"Hello World"' is not assignable
// product = "Hello World";

