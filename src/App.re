[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  let view = switch (url.path) {
    | ["crafters"] => <Layout><Crafters/></Layout>
    | ["stock"] => <Layout><Stock/></Layout>
    | ["shop"] => <Layout><Shop/></Layout>
    | ["heroes"] => <Layout><Heroes/></Layout>
    | ["heroes-choice"] => <Layout><HeroesChoice/></Layout>
    | ["zones"] => <Zones/>
    | _ => <Merchant/>
  };

  <div>
    <StoreContext value={{ money: 0 }}>
      {view}
    </StoreContext>
  </div>
}