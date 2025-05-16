require 'json'

package = JSON.parse(File.read(File.join(__dir__, '..', 'package.json')))

Pod::Spec.new do |s|
  s.name           = 'ExpoMyChart'
  s.version        = package['version']
  s.summary        = package['description']
  s.description    = package['description']
  s.license        = package['license']
  s.author         = package['author']
  s.homepage       = package['homepage']
  s.platforms      = {
    :ios => '15.1',
    :tvos => '15.1'
  }
  s.swift_version  = '5.9'
  s.source           = { :path => '.' }
  s.static_framework = true
  s.requires_arc = true

  s.dependency 'ExpoModulesCore'
  s.module_name = 'ExpoMyChart'
  # Swift/Objective-C compatibility
  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES',
    'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES',
    'FRAMEWORK_SEARCH_PATHS' => '$(PODS_ROOT)/../../Libraries/Dependencies/**',
    'HEADER_SEARCH_PATHS' => '$(PODS_ROOT)/../../Libraries/Dependencies/**',
    'ENABLE_STRICT_OBJC_MSGSEND' => 'NO',
  }

  s.source_files = "**/*.{h,m,mm,swift,hpp,cpp}"
  s.vendored_frameworks = [
    'Libraries/Dependencies/Authentication.xcframework',
    'Libraries/Dependencies/CareTeam.xcframework',
    'Libraries/Dependencies/Checklist.xcframework',
    'Libraries/Dependencies/ContinuingCare.xcframework',
    'Libraries/Dependencies/Education.xcframework',
    'Libraries/Dependencies/FriendsAndFamilyUpdates.xcframework',
    'Libraries/Dependencies/HappeningSoon.xcframework',
    'Libraries/Dependencies/HomePage.xcframework',
    'Libraries/Dependencies/InfectionControl.xcframework',
    'Libraries/Dependencies/LiveActivities.xcframework',
    'Libraries/Dependencies/Medications.xcframework',
    'Libraries/Dependencies/Messaging.xcframework',
    'Libraries/Dependencies/MyChart.xcframework',
    'Libraries/Dependencies/MyChartGlobals.xcframework',
    'Libraries/Dependencies/MyChartNow.xcframework',
    'Libraries/Dependencies/MyDocuments.xcframework',
    'Libraries/Dependencies/Onboarding.xcframework',
    'Libraries/Dependencies/PECore.xcframework',
    'Libraries/Dependencies/PreventiveCare.xcframework',
    'Libraries/Dependencies/ProblemList.xcframework',
    'Libraries/Dependencies/Questionnaires.xcframework',
    'Libraries/Dependencies/Requests.xcframework',
    'Libraries/Dependencies/ShareEverywhere.xcframework',
    'Libraries/Dependencies/SVGRasterizer.xcframework',
    'Libraries/Dependencies/TestResults.xcframework',
    'Libraries/Dependencies/ToDo.xcframework',
    'Libraries/Dependencies/UpcomingOrders.xcframework',
    'Libraries/Dependencies/Visits.xcframework',
    'Libraries/Dependencies/WorkflowStep.xcframework',
    'Libraries/MyChartLibrary.xcframework'
  ]

  s.exclude_files = [
    'Libraries/Headers/*.h',
    'Libraries/Headers/*.m'
  ]
end
