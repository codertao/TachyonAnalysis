
/* quadrant +0x58: 0x40 slots x 0x28 {used, id, leader, alive, spawned, ?, rules, rules, name,
   defname} */

int * Quad_AllocGroupSlot(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x58);
  uVar1 = 0;
  do {
    if (*piVar2 == 0) {
      clr_bytes(piVar2,0x28);
      *piVar2 = 1;
      piVar2[1] = param_2;
      piVar2[9] = (int)&DAT_005320b0;
      return piVar2;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (uVar1 < 0x40);
  return (int *)0x0;
}

