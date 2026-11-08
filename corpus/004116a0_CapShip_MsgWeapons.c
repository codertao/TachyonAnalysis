
/* arg 1 clears root +0x130 bit 1 (turrets on); 0 sets it (turrets off) */

void CapShip_MsgWeapons(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffe;
    return;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
  return;
}

