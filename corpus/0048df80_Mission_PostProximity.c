
/* called per positional object from Dcb_UpdateEngineAudio with dist>>13 */

void Mission_PostProximity(undefined4 param_1,int param_2,undefined4 param_3)

{
  Trig_MatchProximity(param_1,*(undefined4 *)(*(int *)(param_2 + 0x3c) + 4),param_2,param_3);
  Trig_MatchProximity(param_1,*(undefined4 *)(*(int *)(param_2 + 0x3c) + 8),param_2,param_3);
  return;
}

