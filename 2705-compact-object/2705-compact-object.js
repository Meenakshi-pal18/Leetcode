/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function(obj) {

    if (Array.isArray(obj)) {
        return obj
            .filter(Boolean)
            .map(item => compactObject(item));
    }

    if (obj !== null && typeof obj === "object") {
        let ans = {};

        for (let key in obj) {
            let value = compactObject(obj[key]);
            if (Boolean(value)) {
                ans[key] = value;
            }
        }

        return ans;
    }

    return obj;
};