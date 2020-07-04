let storage = Dom.Storage.localStorage;

let getItem = (key: string) => storage |> Dom.Storage.getItem(key);

let setItem = (key: string, value: 'a) => storage |> Dom.Storage.setItem(key, value);