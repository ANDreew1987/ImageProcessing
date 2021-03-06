#pragma once

#include "ImageLib/IBitmap.hpp"
#include "ImageLib/Events.hpp"

namespace ImageLib
{
namespace Filters
{

using ImageLib::IBitmap;
using ImageLib::IProgressEventHandler;
using ImageLib::IFilterControlEventHandler;

class IFilter
{
public:
	virtual ~IFilter() {}

	virtual void ProcessBitmap() = 0;

	virtual void SetBitmap(
		IBitmap* bitmap) = 0;

	virtual void RegisterProgressEventHandler(
		IProgressEventHandler* handler) = 0;
	virtual void RegisterFilterControlEventHandler(
		IFilterControlEventHandler* handler) = 0;

    virtual string GetName() const = 0;
};

}
}
