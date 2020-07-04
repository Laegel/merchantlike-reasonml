type ingredient = {
  item: int,
  quantity: int
};

type sell = {
  price: int,
  time: int
};

type item = {
  sell,
  label: string,
  recipe: list(ingredient),
  stats: string,
  extra: string,
};

let items = [
  {label: "Ashe Log", recipe: [], sell:	{ price: 3, time: 8}, stats: "", extra: ""},
  {label: "Ashe Root", recipe: [], sell:	{ price: 3, time: 8}, stats: "", extra: ""},
  {label: "Boar Fur", recipe: [], sell:	{ price: 7, time: 15}, stats: "", extra: ""},
  {label: "Boar Tusk", recipe: [], sell:	{ price:  9, time: 20}, stats: "", extra: ""},
  {label: "Chieftains Blade", recipe: [], sell:	{ price: 40, time: 60}, stats: "", extra: ""},
  {label: "Emerald", recipe: [], sell:	{ price: 65, time: 80}, stats: "", extra: ""},
  {label: "Forest Crystal", recipe: [], sell:	{ price: 40, time: 50}, stats: "", extra: ""},
  {label: "Goblin Blade", recipe: [], sell:	{ price: 11, time: 20}, stats: "", extra: ""},
  {label: "Goblin Cloth", recipe: [], sell:	{ price: 8, time: 15}, stats: "", extra: ""},
  {label: "Goblin Hilt", recipe: [], sell:	{ price: 11, time: 20}, stats: "", extra: ""},
  {label: "Goblin Plate", recipe: [], sell:	{ price: 8, time: 15}, stats: "", extra: ""},
  {label: "Gronoks Plate", recipe: [], sell:	{ price: 85, time: 90}, stats: "", extra: ""},
  {label: "Hempen Thread", recipe: [], sell:	{ price: 3, time:	8}, stats: "", extra: ""},
  {label: "Hoggers Fur", recipe: [], sell:	{ price: 50, time: 90}, stats: "", extra: ""},
  {label: "Iron Chunk", recipe: [], sell:	{ price: 3, time:	8}, stats: "", extra: ""},
  {label: "Iron Ore", recipe: [], sell:	{ price: 3, time:	8}, stats: "", extra: ""},
  {label: "Maexnas Leg", recipe: [], sell:	{ price: 63, time: 90}, stats: "", extra: ""},
  {label: "Nature Rune", recipe: [], sell:	{ price: 55, time: 60}, stats: "", extra: ""},
  {label: "Sirus Cloth", recipe: [], sell:	{ price: 60, time: 90}, stats: "", extra: ""},
  {label: "Snake Fang", recipe: [], sell:	{ price: 8, time: 20}, stats: "", extra: ""},
  {label: "Snake Scale", recipe: [], sell:	{ price: 6, time: 15}, stats: "", extra: ""},
  {label: "Spider Leg", recipe: [], sell:	{ price: 8, time: 20}, stats: "", extra: ""},
  {label: "Spider Silk", recipe: [], sell:	{ price: 6, time: 15}, stats: "", extra: ""},
  {label: "Tuvale Moss", recipe: [], sell:	{ price: 3, time: 8}, stats: "", extra: ""},
  {label: "Venoms Fang", recipe: [], sell:	{ price: 45, time: 90}, stats: "", extra: ""},
  {
    label: "Ashe Lumber",
    recipe: [
      {
        item: 0,
        quantity: 2,
      }
    ],
    stats: "",
    extra: "",
    sell: {
      time: 15,
      price: 14
    }
  },
  {
    label: "Ashe Wand",
    recipe: [
      {
        quantity: 1,
        item: 25
      }
    ],
    stats: " Atk:~5,MAtk:~25,Acc:~23",
    extra: "",
    sell: {
      time: 35,
      price: 35
    }
  },
  {
    label: "Ashe Club",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 15
      }
    ],
    stats: " Atk:~14,MAtk:~23,Acc:~16",
    extra: "",
    sell: {
      time: 35,
      price: 45
    }
  },
  {
    label: "Ashe Mystic Wand",
    recipe: [
      {
        quantity: 1,
        item: 25
      }
    ],
    stats: " Atk:~5,MAtk:~28,Acc:~24",
    extra: "",
    sell: {
      time: 53,
      price: 60
    }
  },
  {
    label: "Ashe Stave",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 0
      }
    ],
    stats: " Atk:~5,MAtk:~33,Acc:~17",
    extra: "",
    sell: {
      time: 53,
      price: 65
    }
  },
  {
    label: "Ashe Cudgel",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 15
      }
    ],
    stats: " Atk:~21,MAtk:~21,Acc:~16",
    extra: "",
    sell: {
      time: 53,
      price: 70
    }
  },
  {
    label: "Spider Wand",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 2,
        item: 21
      }
    ],
    stats: " Atk:~5,MAtk:~30,Acc:~28",
    extra: " Acc:~2",
    sell: {
      time: 105,
      price: 108
    }
  },
  {
    label: "Ashe Mystic Stave",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 0
      }
    ],
    stats: " Atk:~5,MAtk:~38,Acc:~17",
    extra: "",
    sell: {
      time: 53,
      price: 85
    }
  },
  {
    label: "Boar Club",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 15
      },
      {
        quantity: 2,
        item: 3
      }
    ],
    stats: " Atk:~16,MAtk:~29,Acc:~17",
    extra: " Def:~2",
    sell: {
      time: 123,
      price: 114
    }
  },
  {
    label: "Goblin Wand",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 2,
        item: 9
      }
    ],
    stats: " Atk:~5,MAtk:~31,Acc:~29",
    extra: " MAtk:~2",
    sell: {
      time: 158,
      price: 144
    }
  },
  {
    label: "Goblin Cudgel",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 15
      },
      {
        quantity: 2,
        item: 7
      },
      {
        quantity: 2,
        item: 9
      }
    ],
    stats: " Atk:~24,MAtk:~24,Acc:~17",
    extra: " MAtk:~2,Atk:~2",
    sell: {
      time: 175,
      price: 186
    }
  },
  {
    label: "Spider Stave",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 1,
        item: 0
      },
      {
        quantity: 3,
        item: 21
      }
    ],
    stats: " Atk:~5,MAtk:~41,Acc:~19",
    extra: " Acc:~2",
    sell: {
      time: 158,
      price: 162
    }
  },
  {
    label: "Maexna's Mystic Wand",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 2,
        item: 0
      },
      {
        quantity: 4,
        item: 21
      },
      {
        quantity: 1,
        item: 16
      }
    ],
    stats: " Atk:~5,MAtk:~36,Acc:~29",
    extra: " Int:~1",
    sell: {
      time: 368,
      price: 390
    }
  },
  {
    label: "Goblin Mystic Stave",
    recipe: [
      {
        quantity: 1,
        item: 25
      },
      {
        quantity: 2,
        item: 0
      },
      {
        quantity: 3,
        item: 9
      }
    ],
    stats: " Atk:~5,MAtk:~45,Acc:~18",
    extra: " MAtk:~2",
    sell: {
      time: 175,
      price: 180
    }
  }
];