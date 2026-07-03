class EventEmitter {
    constructor() {
        this.events = new Map();
    }

    /**
     * @param {string} eventName
     * @param {Function} callback
     * @return {Object}
     */
    subscribe(eventName, callback) {
        if (!this.events.has(eventName)) {
            this.events.set(eventName, []);
        }

        this.events.get(eventName).push(callback);

        return {
            unsubscribe: () => {
                let callbacks = this.events.get(eventName);
                this.events.set(
                    eventName,
                    callbacks.filter(fn => fn !== callback)
                );
            }
        };
    }

    /**
     * @param {string} eventName
     * @param {Array} args
     * @return {Array}
     */
    emit(eventName, args = []) {
        if (!this.events.has(eventName)) {
            return [];
        }

        return this.events
            .get(eventName)
            .map(fn => fn(...args));
    }
}