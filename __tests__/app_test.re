open Jest;

describe("App", () => {
  Expect.(
    ReactTestingLibrary.(
      test("should render without crashing", () =>
        render(<App />) |> container |> expect |> toMatchSnapshot
      )
    )
  )
});
