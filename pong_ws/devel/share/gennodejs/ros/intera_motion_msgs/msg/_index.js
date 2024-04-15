
"use strict";

let MotionStatus = require('./MotionStatus.js');
let WaypointOptions = require('./WaypointOptions.js');
let TrackingOptions = require('./TrackingOptions.js');
let TrajectoryOptions = require('./TrajectoryOptions.js');
let JointTrackingError = require('./JointTrackingError.js');
let TrajectoryAnalysis = require('./TrajectoryAnalysis.js');
let EndpointTrackingError = require('./EndpointTrackingError.js');
let Waypoint = require('./Waypoint.js');
let WaypointSimple = require('./WaypointSimple.js');
let InterpolatedPath = require('./InterpolatedPath.js');
let Trajectory = require('./Trajectory.js');
let MotionCommandActionResult = require('./MotionCommandActionResult.js');
let MotionCommandGoal = require('./MotionCommandGoal.js');
let MotionCommandAction = require('./MotionCommandAction.js');
let MotionCommandActionGoal = require('./MotionCommandActionGoal.js');
let MotionCommandResult = require('./MotionCommandResult.js');
let MotionCommandActionFeedback = require('./MotionCommandActionFeedback.js');
let MotionCommandFeedback = require('./MotionCommandFeedback.js');

module.exports = {
  MotionStatus: MotionStatus,
  WaypointOptions: WaypointOptions,
  TrackingOptions: TrackingOptions,
  TrajectoryOptions: TrajectoryOptions,
  JointTrackingError: JointTrackingError,
  TrajectoryAnalysis: TrajectoryAnalysis,
  EndpointTrackingError: EndpointTrackingError,
  Waypoint: Waypoint,
  WaypointSimple: WaypointSimple,
  InterpolatedPath: InterpolatedPath,
  Trajectory: Trajectory,
  MotionCommandActionResult: MotionCommandActionResult,
  MotionCommandGoal: MotionCommandGoal,
  MotionCommandAction: MotionCommandAction,
  MotionCommandActionGoal: MotionCommandActionGoal,
  MotionCommandResult: MotionCommandResult,
  MotionCommandActionFeedback: MotionCommandActionFeedback,
  MotionCommandFeedback: MotionCommandFeedback,
};
