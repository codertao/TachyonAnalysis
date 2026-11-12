
/* SP: random PLAYER.SCR line from chatter set */

void Chatter_PlayRandom(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((((g_FlightStateFlags & 4) != 0) && (g_SrvCurShip != (SpED_SrvPlayer *)0x0)) &&
     (g_SrvCurShip->quadrant != (Quadrant *)0x0)) {
    iVar1 = Chatter_FindSet(param_1);
    if (iVar1 != 0) {
      uVar2 = global_bad_shift_rng();
      if ((uVar2 & 0xffff) < *(uint *)(iVar1 + 0xc)) {
        iVar3 = Chatter_PickLine(iVar1);
        if (iVar3 != 0) {
          some_kind_of_play_sound
                    (s_PLAYER_SCR_0053fa3c,iVar3,*(undefined4 *)(iVar1 + 8),g_SrvCurShip->quadrant);
        }
      }
    }
  }
  return;
}

