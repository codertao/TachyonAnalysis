
/* sweep */

void CapShip_RemoveForHyper(undefined4 param_1)

{
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  CapShip_DetachParts(param_1);
  CapShip_RemoveAllParts(param_1);
  return;
}

