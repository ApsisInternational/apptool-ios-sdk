// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "ApsisOne",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "ApsisOne", 
            targets: ["ApsisOne"])
    ],
    targets: [
        .binaryTarget(
            name: "ApsisOne", 
            path: "ApsisOne.xcframework")
    ])