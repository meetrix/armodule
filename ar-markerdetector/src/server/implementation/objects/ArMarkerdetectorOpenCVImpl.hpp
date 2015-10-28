/* Autogenerated with kurento-module-creator */

#ifndef __AR_MARKERDETECTOR_OPENCV_IMPL_HPP__
#define __AR_MARKERDETECTOR_OPENCV_IMPL_HPP__

#include <OpenCVProcess.hpp>
#include "ArMarkerdetector.hpp"
#include <EventHandler.hpp>
#include "Process.h"

namespace kurento
{
namespace module
{
namespace armarkerdetector
{

class ArMarkerdetectorOpenCVImpl : public virtual OpenCVProcess
{
protected:
  ArProcess ar;

  // TODO: Following is a kludge to get correct shared_from_this()
  //       from the ArMarkerdetectorImpl class inherited from this.
  virtual std::shared_ptr<MediaObject> getSharedFromThis()=0;

public:

  ArMarkerdetectorOpenCVImpl ();

  virtual ~ArMarkerdetectorOpenCVImpl () {};

  virtual void process (cv::Mat &mat);

  void setPose (int id, int type, float value);
  void enableAugmentation (bool enable);
  void enableMarkerCountEvents (bool enable);
  void enableAugmentationSet (const std::vector<int> &arset);
  void disableAugmentationSet (const std::vector<int> &arset);
  void setArThing (const std::vector<std::shared_ptr<ArThing>> &arThing);
  void setMarkerPoseFrequency (bool enable, float frequency);
  void setMarkerPoseFrameFrequency (bool enable, int frequency);
  void setShowDebugLevel (int showDebugLevel);
  sigc::signal<void, MarkerCount> signalMarkerCount;
  sigc::signal<void, MarkerPose> signalMarkerPose;

};

} /* armarkerdetector */
} /* module */
} /* kurento */

#endif /*  __AR_MARKERDETECTOR_OPENCV_IMPL_HPP__ */
