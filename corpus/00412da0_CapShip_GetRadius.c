
/* sweep */

undefined4 CapShip_GetRadius(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
      return *(undefined4 *)(param_2 + 0x164);
    }
    return *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x30);
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    return *(undefined4 *)(param_2 + 0x164);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x30);
}

