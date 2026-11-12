
/* sweep */

void ShipReplica_SetFlags(int param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  return;
}

