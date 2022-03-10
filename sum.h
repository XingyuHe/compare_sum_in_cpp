template<typename Container, typename Operation, typename Accumulator>
Accumulator sum(Container c, Operation op, Accumulator acc)
{
  for (const auto & element : c) {
    acc = op(acc, element);
  }
  return acc;
}

// TODO: test this agains sum
template<typename Container, typename Operation, typename Accumulator>
Accumulator sumMove(Container c, Operation op, Accumulator acc)
{
  for (const auto & element : c) {
    acc = op(move(acc), element);
  }
  return acc;
}

// TODO
template<typename Container, typename Operation, typename Accumulator>
Accumulator sumConept(Container c, Operation op, Accumulator acc)
{
  for (const auto & element : c) {
    acc = op(acc, element);
  }
  return acc;
}