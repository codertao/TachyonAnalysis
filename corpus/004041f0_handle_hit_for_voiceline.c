
void handle_hit_for_voiceline(SpED *self,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Sped_GetActorRecord(self[1].prev,self->quadrant);
  if (iVar2 != 0) {
    if (((*(short *)(param_2 + 0x76) == 1) && (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) &&
       (iVar3 = some_kind_of_play_sound(iVar2,s_HITBY_PLAYER_00532654,0x5dc,self->quadrant),
       iVar3 != 0)) {
      return;
    }
    if (((0xf < (int)self[3].qPrev2) && (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) &&
       (iVar3 = some_kind_of_play_sound(iVar2,s_NEED_HELP_00532648,0x5dc,self->quadrant), iVar3 != 0
       )) {
      return;
    }
    if ((*(int *)&self[1].field_0x40 < (int)self->desc[1].radarVisible) &&
       (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) {
      some_kind_of_play_sound(iVar2,s_SHIELDS_DOWN_00532638,30000,self->quadrant);
    }
  }
  return;
}

