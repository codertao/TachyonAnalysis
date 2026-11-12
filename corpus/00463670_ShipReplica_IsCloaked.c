
/* sweep: guess */

bool ShipReplica_IsCloaked(int param_1)

{
  return *(char *)(param_1 + 0xf6) != '\0';
}

