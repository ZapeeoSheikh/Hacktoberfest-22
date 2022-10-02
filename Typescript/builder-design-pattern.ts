class Burger {
    constructor(
        public ketchup?: boolean,
        public mayo?: boolean,
        public mustard?: boolean,
        public cheese?: boolean,
        public lettuce?: boolean,
        public chicken?: boolean,
        public beef?: boolean,
        public fish?: boolean,
    ) {}


    /**
     * Every method returns an instance of the object
     * to allow for chaining of methods together
     */
    addKetchup() {
        this.ketchup = true;
        return this;
    }
    addMayo() {
        this.mayo = true;
        return this;
    }
    addMustard() {
        this.mustard = true;
        return this;
    }
    addCheese() {
        this.cheese = true;
        return this;
    }
    addLettuce() {
        this.lettuce = true;
        return this;
    }
    addChicken() {
        this.chicken = true;
        return this;
    }
    addBeef() {
        this.beef = true;
        return this;
    }
    addFish() {
        this.fish = true;
        return this;
    }
};

const cheeseBurger = new Burger();

// Builder design pattern allows us to chain methods
cheeseBurger
    .addChicken()
    .addMustard()
    .addKetchup()
    .addLettuce();