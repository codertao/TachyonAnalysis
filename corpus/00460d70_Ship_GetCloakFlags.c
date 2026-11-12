
/* sweep: guess */

void Ship_GetCloakFlags(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0x76) == 1)) {
    puVar1 = (uint *)(*(int *)(param_1 + 0xdc) + 0x1c4);
    *puVar1 = *puVar1 | 0x10;
  }
  return;
}

