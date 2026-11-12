
/* sweep */

void GateReplica_Think(undefined4 param_1)

{
  Replica_Extrapolate(param_1);
  Replica_LineOfSightCheck(param_1);
  return;
}

