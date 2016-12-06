/*
 * Copyright (C) Research In Motion Limited 2010. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef SVGPathSegListSource_h
#define SVGPathSegListSource_h

#include "FloatPoint.h"
#include "SVGPathSeg.h"
#include "SVGPathSegList.h"
#include "SVGPathSource.h"
#include <wtf/RefPtr.h>

namespace WebCore {

class SVGPathSegListSource : public SVGPathSource {
public:
    explicit SVGPathSegListSource(const SVGPathSegList&);

private:
    bool hasMoreData() const override;
    bool moveToNextToken() override { return true; }
    bool parseSVGSegmentType(SVGPathSegType&) override;
    SVGPathSegType nextCommand(SVGPathSegType) override;

    bool parseMoveToSegment(FloatPoint&) override;
    bool parseLineToSegment(FloatPoint&) override;
    bool parseLineToHorizontalSegment(float&) override;
    bool parseLineToVerticalSegment(float&) override;
    bool parseCurveToCubicSegment(FloatPoint&, FloatPoint&, FloatPoint&) override;
    bool parseCurveToCubicSmoothSegment(FloatPoint&, FloatPoint&) override;
    bool parseCurveToQuadraticSegment(FloatPoint&, FloatPoint&) override;
    bool parseCurveToQuadraticSmoothSegment(FloatPoint&) override;
    bool parseArcToSegment(float&, float&, float&, bool&, bool&, FloatPoint&) override;

    const SVGPathSegList& m_pathSegList;
    RefPtr<SVGPathSeg> m_segment;
    int m_itemCurrent;
    int m_itemEnd;
};

} // namespace WebCore

#endif // SVGPathSegListSource_h
