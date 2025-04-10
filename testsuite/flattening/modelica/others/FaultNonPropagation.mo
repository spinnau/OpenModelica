// name:     FaultNonPropagation
// keywords:
// status:   correct
//
// Checks that faults in an unused model doesn't cause instantiation of another
// model to fail.
//

model AllKindsOfWrong
  model A end A;
  redeclare model A extends A; end A;
  A A;
  Real A;
  extends AllKindsOfWrong;
end AllKindsOfWrong;

model FaultNonPropagation
  Real x = 1;
  annotation(__OpenModelica_commandLineOptions="-d=-newInst");
end FaultNonPropagation;

// Result:
// class FaultNonPropagation
//   Real x = 1.0;
// end FaultNonPropagation;
// endResult
