import axios from "axios";

const BASE_URL = 'https://app-restaurant-165de-default-rtdb.firebaseio.com';

const api = axios.create({
    baseURL: BASE_URL
})

export const ENDPOINTS = {
    CUSTOMER: '/Customer',
    FOODITEM: '/FoodItem',
    ORDER: '/Order',
}

export const createAPIEndpoint = endpoint => { 

    return {
        fetchAll : () => api.get(endpoint + ".json"),
        fetchById : id => api.get(endpoint + "/" + id + ".json"),
        create : newRecord => api.post(endpoint + ".json", newRecord),
        update : (id, updatedRecord) => api.put(endpoint + "/" + id + ".json", updatedRecord),
        delete : (id) => api.delete(endpoint + "/" + id + ".json"),
    }
}